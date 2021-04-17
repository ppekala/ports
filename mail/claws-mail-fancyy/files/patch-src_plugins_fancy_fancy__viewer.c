Bug #4469: [PATCH] Make fancy respect default font size for messageview
https://www.thewildbeast.co.uk/claws-mail/bugzilla/show_bug.cgi?id=4469

--- src/plugins/fancy/fancy_viewer.c.orig	2021-04-17 20:09:10 UTC
+++ src/plugins/fancy/fancy_viewer.c
@@ -98,6 +98,17 @@ static void fancy_apply_prefs(FancyViewer *viewer)
 		"serif-font-family", "Times New Roman",
 #endif
 		NULL);
+	if (fancy_prefs.stylesheet == NULL || strlen(fancy_prefs.stylesheet) == 0) {
+		gchar **msg_font_params = g_strsplit(prefs_common.textfont, " ", 0);
+		guint params_len = g_strv_length(msg_font_params);
+
+		if (params_len > 0) {
+			gint msg_font_size = g_ascii_strtoll(msg_font_params[params_len - 1], NULL, 10);
+			g_object_set(viewer->settings,
+				"default-font-size", msg_font_size, NULL);
+		}
+		g_strfreev(msg_font_params);
+	}
 	webkit_web_view_set_settings(viewer->view, viewer->settings);
 }
 
