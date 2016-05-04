<?php
/**
 * @file
 * panel_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panel_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}
