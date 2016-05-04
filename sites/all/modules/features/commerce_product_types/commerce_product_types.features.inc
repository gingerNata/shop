<?php
/**
 * @file
 * commerce_product_types.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function commerce_product_types_commerce_product_default_types() {
  $items = array(
    'product' => array(
      'type' => 'product',
      'name' => 'Product-clothing',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}
