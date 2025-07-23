<div class="<?php print implode(' ', $classes_array); ?>"<?php print backdrop_attributes($attributes); ?>>
  <?php print render($admin_links); ?>
  <?php print render($title_prefix); ?>
  <?php print render($title_suffix); ?>
  <div class="content"<?php print backdrop_attributes($content_attributes); ?>>
    <div class="aplenty-heading">
      <?php print render($heading); ?>
    </div>
    <div class="aplenty-subheading">
      <?php print render($subheading); ?>
    </div>
  </div>
</div>

