#ifndef __UI_DRAWING__
#define __UI_DRAWING__

#include <gtk/gtk.h>
#include <cairo.h>


gboolean on_expose_cb(GtkWidget *widget, GdkEventExpose *event, gpointer data);
gboolean on_move_cb(GtkWidget *widget, GdkEventExpose *event, gpointer data);
gboolean on_click_cb(GtkWidget *widget, GdkEventExpose *event, gpointer data);
GtkWidget * get_drawing_area (int width, int height);

#endif