#include "ryan.h"

extern keymap_config_t keymap_config;

#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
float tone_colemak[][2]    = SONG(COLEMAK_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
    case COLEMAKDH:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLE);
      }
      return false;
    /* case LOWER: */
    /*   if (record->event.pressed) { */
    /*     layer_on(_LOWER); */
    /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
    /*   } else { */
    /*     layer_off(_LOWER); */
    /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
    /*   } */
    /*   return false; */
    /* case RAISE: */
    /*   if (record->event.pressed) { */
    /*     layer_on(_RAISE); */
    /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
    /*   } else { */
    /*     layer_off(_RAISE); */
    /*     update_tri_layer(_LOWER, _RAISE, _ADJUST); */
    /*   } */
    /*   return false; */
    
    /*case EPRM:*/
      /*if (record->event.pressed) {*/
        /*eeconfig_init();*/
      /*}*/
      /*return false;*/
    /*case VRSN:*/
      /*if (record->event.pressed) {*/
        /*SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);*/
      /*}*/
      /*return false;*/
    /*case RGB_SLD:*/
      /*if (record->event.pressed) {*/
        /*#ifdef RGBLIGHT_ENABLE*/
        /*rgblight_mode(1);*/
        /*#endif*/
      /*}*/
      /*return false;*/
    
    
    case UTIL_NOT_EQ:
      if (record->event.pressed) {
        SEND_STRING("!=");
      }
        break;
    case UTIL_LT_EQ:
      if (record->event.pressed) {
        SEND_STRING("<=");
      }
        break;
    case UTIL_GT_EQ:
      if (record->event.pressed) {
        SEND_STRING(">=");
      }
        break;
    case VIM_QUIT:
      if (record->event.pressed) {
        SEND_STRING(":q"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WRITE:
      if (record->event.pressed) {
        SEND_STRING(":w"SS_TAP(X_ENTER));
      }
        break;
    case VIM_PASTE_LAST_YANK:
      if (record->event.pressed) {
        SEND_STRING("\"0p");
      }
        break;
    case VIM_USAGES_CWORD:
      if (record->event.pressed) {
        SEND_STRING(":UsagesCWord"SS_TAP(X_ENTER));
      }
        break;
    case VIM_USAGES_CFILE:
      if (record->event.pressed) {
        SEND_STRING(":UsagesCFile"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GIT_STATUS:
      if (record->event.pressed) {
        SEND_STRING(",gs");
      }
        break;
    case VIM_GIT_BLAME:
      if (record->event.pressed) {
        SEND_STRING(",gb");
      }
        break;
    case VIM_EDIT_INDEX_TOGGLE:
      if (record->event.pressed) {
        SEND_STRING(",ge");
      }
        break;
    case VIM_DIFF_INDEX:
      if (record->event.pressed) {
        SEND_STRING(",gd");
      }
        break;
    case VIM_DIFF_MASTER:
      if (record->event.pressed) {
        SEND_STRING(",gdm");
      }
        break;
    case VIM_GIT_MASTER_FILE:
      if (record->event.pressed) {
        SEND_STRING(",gem");
      }
        break;
    case VIM_GITV:
      if (record->event.pressed) {
        SEND_STRING("Gitv");
      }
        break;
    case VIM_PICK_AXE:
      if (record->event.pressed) {
        SEND_STRING(":PickAxe"SS_TAP(X_ENTER));
      }
        break;
    case VIM_PICK_AXE_CURRENT_FILE:
      if (record->event.pressed) {
        SEND_STRING(":PickAxeCurrentFile"SS_TAP(X_ENTER));
      }
        break;
    case VIM_ARGS_FIRST:
      if (record->event.pressed) {
        SEND_STRING("[A");
      }
        break;
    case VIM_ARGS_NEXT:
      if (record->event.pressed) {
        SEND_STRING("]a");
      }
        break;
    case VIM_ARGS_PREV:
      if (record->event.pressed) {
        SEND_STRING("[a");
      }
        break;
    case VIM_ARGS_LAST:
      if (record->event.pressed) {
        SEND_STRING("]A");
      }
        break;
    case VIM_QUICK_FIRST:
      if (record->event.pressed) {
        SEND_STRING("[Q");
      }
        break;
    case VIM_QUICK_NEXT:
      if (record->event.pressed) {
        SEND_STRING("]q");
      }
        break;
    case VIM_QUICK_PREV:
      if (record->event.pressed) {
        SEND_STRING("[q");
      }
        break;
    case VIM_QUICK_LAST:
      if (record->event.pressed) {
        SEND_STRING("]Q");
      }
        break;
    case VIM_CHANGE_FIRST:
      if (record->event.pressed) {
        SEND_STRING("[C");
      }
        break;
    case VIM_CHANGE_NEXT:
      if (record->event.pressed) {
        SEND_STRING("]c");
      }
        break;
    case VIM_CHANGE_PREV:
      if (record->event.pressed) {
        SEND_STRING("[c");
      }
        break;
    case VIM_CHANGE_LAST:
      if (record->event.pressed) {
        SEND_STRING("]C");
      }
        break;
    case VIM_METHOD_NEXT:
      if (record->event.pressed) {
        SEND_STRING("]m");
      }
        break;
    case VIM_METHOD_PREV:
      if (record->event.pressed) {
        SEND_STRING("[m");
      }
        break;
    case VIM_EXCHANGE_LINE_BELOW:
      if (record->event.pressed) {
        SEND_STRING("]e");
      }
        break;
    case VIM_EXCHANGE_LINE_ABOVE:
      if (record->event.pressed) {
        SEND_STRING("[e");
      }
        break;
    case VIM_INSERT_SPACE_BELOW:
      if (record->event.pressed) {
        SEND_STRING("] ");
      }
        break;
    case VIM_INSERT_SPACE_ABOVE:
      if (record->event.pressed) {
        SEND_STRING("[ ");
      }
        break;
    case VIM_DIFF_TOGGLE:
      if (record->event.pressed) {
        SEND_STRING("=od");
      }
        break;
    case VIM_BUFFER_PREV:
      if (record->event.pressed) {
        SEND_STRING(":BufSurfBack"SS_TAP(X_ENTER));
      }
        break;
    case VIM_BUFFER_NEXT:
      if (record->event.pressed) {
        SEND_STRING(":BufSurfForward"SS_TAP(X_ENTER));
      }
        break;
    case VIM_CTAGS_SEL:
      if (record->event.pressed) {
        SEND_STRING(":ts"SS_TAP(X_ENTER));
      }
        break;
    case VIM_CTAGS_DECL:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("]"));
      }
        break;
    case VIM_TAGS:
      if (record->event.pressed) {
        SEND_STRING(":Tags"SS_TAP(X_ENTER));
      }
        break;
    case VIM_TAGBAR_OPEN_AUTOCLOSE:
      if (record->event.pressed) {
        SEND_STRING(":TagbarOpenAutoClose"SS_TAP(X_ENTER));
      }
        break;
    case VIM_FIND_INPATH:
      if (record->event.pressed) {
        SEND_STRING(",k");
      }
        break;
    case VIM_FIND_FILE:
      if (record->event.pressed) {
        SEND_STRING(",t");
      }
        break;
    case VIM_FIND_WORD_IN_DIR:
      if (record->event.pressed) {
        // preview dir in main pane
        SEND_STRING("go");
        // move to main pane
        SEND_STRING(SS_LCTRL("i"));
        // move down 3 lines to get to dir in main pain
        SEND_STRING(SS_TAP(X_DOWN));
        SEND_STRING(SS_TAP(X_DOWN));
        SEND_STRING(SS_TAP(X_DOWN));
        // change to selected dir
        SEND_STRING("cd");
        // search files
        SEND_STRING(",k");
      }
        break;
    case VIM_FIND_FILE_IN_DIR:
      if (record->event.pressed) {
        // preview dir in main pane
        SEND_STRING("go");
        // move to main pane
        SEND_STRING(SS_LCTRL("i"));
        // move down 3 lines to get to dir in main pain
        SEND_STRING(SS_TAP(X_DOWN));
        SEND_STRING(SS_TAP(X_DOWN));
        SEND_STRING(SS_TAP(X_DOWN));
        // change to selected dir
        SEND_STRING("cd");
        // search files
        SEND_STRING(",f");
      }
        break;
    case VIM_MARKS:
      if (record->event.pressed) {
        SEND_STRING(":Marks"SS_TAP(X_ENTER));
      }
        break;
    case VIM_RECENT_CHANGES:
      if (record->event.pressed) {
        SEND_STRING("g;");
      }
        break;
    case VIM_FILES_RECENT:
      if (record->event.pressed) {
        SEND_STRING("t");
      }
        break;
    case VIM_VIEW_PROJ:
      if (record->event.pressed) {
        SEND_STRING(",d");
      }
        break;
    case VIM_FILE_INPROJ:
      if (record->event.pressed) {
        SEND_STRING(",n");
      }
        break;
    case VIM_DISPATCH_NPM:
      if (record->event.pressed) {
        SEND_STRING(":Dispatch npm run ");
      }
        break;
    case VIM_SHOW_ALIASES:
      if (record->event.pressed) {
        SEND_STRING(":ShowAliases"SS_TAP(X_ENTER));
      }
        break;
    case VIM_SHOW_WORKFLOWS:
      if (record->event.pressed) {
        SEND_STRING(":ShowWorkflows"SS_TAP(X_ENTER));
      }
        break;
    case VIM_ONLY:
      if (record->event.pressed) {
        SEND_STRING(":only"SS_TAP(X_ENTER));
      }
        break;
    case VIM_COMMENT:
      if (record->event.pressed) {
        SEND_STRING("gc");
      }
        break;
    case VIM_NERD_NEW:
      if (record->event.pressed) {
        SEND_STRING("ma");
      }
        break;
    case VIM_NERD_COPY:
      if (record->event.pressed) {
        SEND_STRING("mc");
      }
        break;
    case VIM_NERD_MOVE:
      if (record->event.pressed) {
        SEND_STRING("mm");
      }
        break;
    case VIM_NERD_DEL:
      if (record->event.pressed) {
        SEND_STRING("md");
      }
        break;
    case VIM_GUNDO:
      if (record->event.pressed) {
        SEND_STRING(":GundoToggle"SS_TAP(X_ENTER));
      }
        break;
    case VIM_SNIPPETS:
      if (record->event.pressed) {
        SEND_STRING(":Snippets"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_SHOW_NOTES:
      if (record->event.pressed) {
        SEND_STRING(":WorkShowNotes"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_SHOW_SCRIPTS:
      if (record->event.pressed) {
        SEND_STRING(":WorkShowScripts"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DIR_DEPLOY:
      if (record->event.pressed) {
        SEND_STRING(":CdDeploy"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DIR_DEVTOOLS:
      if (record->event.pressed) {
        SEND_STRING(":CdDevTools"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DIR_DATA:
      if (record->event.pressed) {
        SEND_STRING(":CdData"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DIR_SERVER:
      if (record->event.pressed) {
        SEND_STRING(":CdServer"SS_TAP(X_ENTER));
      }
        break;
    case VIM_DIR_CLIENT:
      if (record->event.pressed) {
        SEND_STRING(":CdClient"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_DIR_ROOT:
      if (record->event.pressed) {
        SEND_STRING(":CdRoot"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_DIR_AUTO:
      if (record->event.pressed) {
        SEND_STRING(":CdAuto"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_DIR_MIGRATIONS:
      if (record->event.pressed) {
        SEND_STRING(":CdMigrations"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_DIR_FE_TOP:
      if (record->event.pressed) {
        SEND_STRING(":CdFeResources"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_DIR_FE_SHOPPING:
      if (record->event.pressed) {
        SEND_STRING(":CdShopping"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_GOTO_COMPONENT:
      if (record->event.pressed) {
        SEND_STRING(":WorkGotoComponent"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GET_STYLE_FILE:
      if (record->event.pressed) {
        SEND_STRING(":GetStyleFile"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_GET_TEMPLATE:
      if (record->event.pressed) {
        SEND_STRING(":WorkGetComponentTemplates"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_GET_BACKING_FILE:
      if (record->event.pressed) {
        SEND_STRING(":WorkGetBackingFile"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GOTO_TEST:
      if (record->event.pressed) {
        SEND_STRING(":GotoTest"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GET_USAGES_BY_CURRENT_FILE:
      if (record->event.pressed) {
        SEND_STRING(":GetUsagesByCurrentFile"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GET_IMPL:
      if (record->event.pressed) {
        SEND_STRING(":GetImpl"SS_TAP(X_ENTER));
      }
        break;
    case VIM_GET_IMPL_CURSOR_WORD:
      if (record->event.pressed) {
        SEND_STRING(":GetImplWord"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_GET_MIGRATIONS_SHARED:
      if (record->event.pressed) {
        SEND_STRING(":WorkGetMigrationsShared"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_GET_MIGRATIONS_CLIENT:
      if (record->event.pressed) {
        SEND_STRING(":WorkGetMigrationsClient"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_GOTO_TP:
      if (record->event.pressed) {
        SEND_STRING(":WorkGotoTp"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_SEARCH_CONFLUENCE:
      if (record->event.pressed) {
        SEND_STRING(":WorkSearchConfluence"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_LIST_ROUTES:
      if (record->event.pressed) {
        SEND_STRING(":WorkListRoutes"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_LIST_CONTROLLERS:
      if (record->event.pressed) {
        SEND_STRING(":WorkListControllers"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_LIST_COMPONENTS:
      if (record->event.pressed) {
        SEND_STRING(":WorkListComponents"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_LIST_HANDLEBAR_HELPERS:
      if (record->event.pressed) {
        SEND_STRING(":WorkListHandlebarHelpers"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_LIST_TEMPLATES:
      if (record->event.pressed) {
        SEND_STRING(":WorkListTemplates"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_LIST_ACTIONS:
      if (record->event.pressed) {
        SEND_STRING(":WorkListActions"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_LIST_MODELS:
      if (record->event.pressed) {
        SEND_STRING(":WorkListModels"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_LIST_STORES:
      if (record->event.pressed) {
        SEND_STRING(":WorkListStores"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_LIST_STYLES:
      if (record->event.pressed) {
        SEND_STRING(":WorkListStyles"SS_TAP(X_ENTER));
      }
        break;
    case VIM_WORK_SPRING_CONFIGS:
      if (record->event.pressed) {
        SEND_STRING(":WorkSpringConfigs"SS_TAP(X_ENTER));
      }
        break;

    case TMUX_PANE_NEXT:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("bj"));
      }
        break;
    case TMUX_WIN_PREV:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("bh"));
      }
        break;
    case TMUX_WIN_NEXT:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("bl"));
      }
        break;
    case TMUX_SCROLL:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("b")"[");
      }
        break;
    case TMUX_ZOOM_TOGGLE:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("b")"z");
      }
        break;
  }
  return true;
}


/*bool process_record_user(uint16_t keycode, keyrecord_t *record) {*/
  /*switch (keycode) {*/
    /*case QWERTY:*/
      /*if (record->event.pressed) {*/
        /*#ifdef AUDIO_ENABLE*/
          /*PLAY_SONG(tone_qwerty);*/
        /*#endif*/
        /*[>persistent_default_layer_set(1UL<<_QWERTY);<]*/
      /*}*/
      /*break;*/
      /*break;*/
    /*case COLEMAKDH:*/
      /*if (record->event.pressed) {*/
        /*#ifdef AUDIO_ENABLE*/
          /*PLAY_SONG(tone_colemak);*/
        /*#endif*/
        /*[>persistent_default_layer_set(1UL<<_COLE);<]*/
      /*}*/
      /*break;*/
      /*break;*/
    /*case LOWER:*/
      /*if (record->event.pressed) {*/
        /*layer_on(_LOWER);*/
        /*update_tri_layer(_LOWER, _RAISE, _ADJUST);*/
      /*} else {*/
        /*layer_off(_LOWER);*/
        /*update_tri_layer(_LOWER, _RAISE, _ADJUST);*/
      /*}*/
      /*break;*/
      /*break;*/
    /*case RAISE:*/
      /*if (record->event.pressed) {*/
        /*layer_on(_RAISE);*/
        /*update_tri_layer(_LOWER, _RAISE, _ADJUST);*/
      /*} else {*/
        /*layer_off(_RAISE);*/
        /*update_tri_layer(_LOWER, _RAISE, _ADJUST);*/
      /*}*/
      /*break;*/
      /*break;*/
      
      
  /*}*/
  /*return true;*/
/*}*/
