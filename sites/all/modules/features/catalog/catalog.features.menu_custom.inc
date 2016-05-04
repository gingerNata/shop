<?php
/**
 * @file
 * catalog.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function catalog_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-category.
  $menus['menu-category'] = array(
    'menu_name' => 'menu-category',
    'title' => 'Category',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Category');

  return $menus;
}
