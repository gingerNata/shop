<?php
/**
 * @file
 * Template for a commerce cart panel layout.
 */
?>
<div class="breadcrumb">
  <div class="inner">
    <?php print $content['breadcrumb']; ?>
  </div>
</div>
<?php if ($content['page_title']) : ?>
  <div class="page-title">
    <?php print $content['page_title']; ?>
    <div class="steps">
      <?php print $content['steps_info']; ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($content['cart_intro'])): ?>
  <?php print $content['cart_intro']; ?>
<?php endif; ?>
<div class="content-1">
  <?php if (!empty($content['cart_content'])): ?>
    <?php print $content['cart_content'];?>
  <?php endif; ?>
</div>

  <div class="btn-to-top" id="btn-to-top">
    <a href="javascript: void(0);" title="haut de page"><?php t('haut de page'); ?></a>
  </div>

<?php if ($content['you_would_like']) : ?>
  <?php print $content['you_would_like']; ?>
<?php endif; ?>
