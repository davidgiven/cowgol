/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 * xv_termsw.c
 * Demonstrate incorporation of a Term subwindow in an application;
 * keyboard input to the termsw can come either directly to the
 * termsw or from an adjoining panel text item.
 */
#include <stdio.h>
#include <xview/xview.h>
#include <xview/panel.h>
/* #include <xview/tty.h> */
#include <xview/termsw.h>

Termsw          term;

int
selected(item, event)
Panel_item item;
Event *event;
{
	printf("%s selected...\n", xv_get(item, PANEL_LABEL_STRING));
	return XV_OK;
}

void
menu_notify_proc(menu, menu_item)
Menu menu;
Menu_item menu_item;
{
	char *menu_choice = (char *)xv_get(menu_item, MENU_STRING);
	printf ("Choice: %s\n", menu_choice);
}

/*
 * This procedure is called when the user this return on the
 * panel text item or clicking on the <apply> button.
 */
int
notify_proc(item,event)
	Panel_item      item;
	Event   *event;
{
	char        str[81];
    
	sprintf(str, "%.81s\n", (char *)xv_get(item, PANEL_VALUE));
	ttysw_input(term, str, strlen(str));
	return XV_OK;
}

main(argc,argv)
	int     argc;
	char    *argv[];
{
	Frame       frame;
	Panel       panel;
	Menu        menu;
	int         notify_proc();

	Panel_item      text_item;

	xv_init(XV_INIT_ARGS, argc, argv, NULL);

	frame = (Frame)xv_create(NULL, FRAME, NULL);
	panel = (Panel)xv_create(frame, PANEL, NULL);


	/* Create the menu _before_ the panel button */
	menu = (Menu)
		xv_create(NULL, MENU,
			  MENU_NOTIFY_PROC,       menu_notify_proc,
			  MENU_STRINGS,           "Exit", NULL,
			  NULL);
	(void) xv_create(panel, PANEL_BUTTON,
			 PANEL_LABEL_STRING,     "File",
			 PANEL_NOTIFY_PROC,      selected,
			 PANEL_ITEM_MENU,        menu, /* attach menu to button */
			 NULL);

	/* Create the menu _before_ the panel button */
	menu = (Menu)
		xv_create(NULL, MENU,
			  MENU_NOTIFY_PROC,       menu_notify_proc,
			  MENU_STRINGS,           "Memory", "Registers", "Breakpoint", "Code", "Callstack", "Symbols", NULL,
			  MENU_DEFAULT,		4,
			  NULL);
	(void) xv_create(panel, PANEL_BUTTON,
			 PANEL_LABEL_STRING,     "View",
			 PANEL_NOTIFY_PROC,      selected,
			 PANEL_ITEM_MENU,        menu, /* attach menu to button */
			 NULL);

	/* Edit->Register    ->EditRegisterWindow    [Apply][Cancel] */
	/* Edit->Memory      ->EditMemoryWindow      [Apply][Cancel] */
	/* Edit->Breakpoints ->EditBreakpointsWindow [Apply][Cancel] */
	/* Create the menu _before_ the panel button */
	menu = (Menu)
		xv_create(NULL, MENU,
			  MENU_NOTIFY_PROC,       menu_notify_proc,
			  MENU_STRINGS,           "Memory", "Register", "Breakpoints", NULL,
			  MENU_DEFAULT,		4,
			  NULL);
	(void) xv_create(panel, PANEL_BUTTON,
			 PANEL_LABEL_STRING,     "Edit",
			 PANEL_NOTIFY_PROC,      selected,
			 PANEL_ITEM_MENU,        menu, /* attach menu to button */
			 NULL);

	/* Create the menu _before_ the panel button */
	menu = (Menu)
		xv_create(NULL, MENU,
			  MENU_NOTIFY_PROC,       menu_notify_proc,
			  MENU_STRINGS,           "Trace into", "Step over", "Go", NULL,
			  MENU_DEFAULT,		4,
			  NULL);
	(void) xv_create(panel, PANEL_BUTTON,
			 PANEL_LABEL_STRING,     "Run",
			 PANEL_NOTIFY_PROC,      selected,
			 PANEL_ITEM_MENU,        menu, /* attach menu to button */
			 NULL);

	window_fit_height(panel);

	term = (Termsw)xv_create(frame, TERMSW, NULL);

	window_fit(frame);
	xv_main_loop(frame);
}

