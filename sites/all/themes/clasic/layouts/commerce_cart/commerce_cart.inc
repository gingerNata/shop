<?php
// Plugin definition
$plugin = array(
  'title'       => t('Commerce Cart template'),
  'category'    => t('First'),
  'icon'        => 'commerce_cart.png',
  'css'        => 'commerce_cart.css',
  'theme'       => 'commerce_cart',
  'admin theme' => 'commerce_cart_admin',
  'regions'     => array(
    'breadcrumb'        => t('Breadcrumb'),
    'page_title'        => t('Commerce Cart page title'),
    'steps_info'        => t('Steps Info'),
    'cart_intro'        => t('Cart Description'),
    'cart_content'      => t('Cart Content'),
    'you_would_like'    => t('You would like'),
  ),
);
