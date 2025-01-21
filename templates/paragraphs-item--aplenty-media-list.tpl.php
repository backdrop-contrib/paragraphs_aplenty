<div class="<?php print implode(' ', $classes_array); ?>"<?php print backdrop_attributes($attributes); ?>>
  <?php print render($admin_links); ?>
  <?php print render($title_prefix); ?>
  <?php print render($title_suffix); ?>
  <div class="content"<?php print backdrop_attributes($content_attributes); ?>>
    <div class="<?php print $aplenty_row_class; ?>">
      <?php foreach ($aplenty_media_list as $media_item): ?>
        <?php print render($media_item); ?>
      <?php endforeach; ?>
    </div>
  </div>

</div>
