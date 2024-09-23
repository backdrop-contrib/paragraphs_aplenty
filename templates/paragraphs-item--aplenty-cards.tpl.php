<div class="<?php print implode(' ', $classes_array); ?>"<?php print backdrop_attributes($attributes); ?>>
  <?php print render($admin_links); ?>
  <?php print render($title_prefix); ?>
  <?php print render($title_suffix); ?>
  <div class="content"<?php print backdrop_attributes($content_attributes); ?>>
    <div class="row">
      <?php foreach ($aplenty_cards as $card): ?>
        <?php print render($card); ?>
      <?php endforeach; ?>
    </div>
  </div>

</div>
