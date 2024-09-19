<?php

/**
 * @file
 * Paragraph Type CRUD
 */

/**
 * Helper function to create a paragraphs bundle (type).
 *
 * @param string $machine
 *   The machine name for the bundle.
 * @param array $settings
 *   The settings for the bundle. Required:
 *     - name
 *     - label
 *   Optional:
 *     - description
 *     - allow_unpublish
 *     - locked
 */
function paragraphs_aplenty_create_bundle($machine, $settings) {
  $existing = paragraphs_bundle_load($machine);
  if ($existing) {
    return;
  }

  $common = array(
    'bundle' => $machine,
    'description' => '',
    'allow_unpublish' => 1,
    'locked' => 0,
  );

  $bundle_settings = $settings + $common;
  paragraphs_bundle_save((object) $bundle_settings);
}

/**
 * Helper function to add a boolean field to a bundle.
 *
 * @param string $field_name
 *   The field name.
 * @param string $bundle
 *   The paragraphs bundle.
 * @param array $instance_overrides
 *   Nested array of instance overrides
 * @param array $base_overrides
 *   Optional nested array of field overrides.
 */
function paragraphs_aplenty_add_boolean_field($field_name, $bundle, $instance_overrides, $base_overrides = array()) {

  $entity_type = 'paragraphs_item';

  $existing = field_info_field($field_name);
  if (empty($existing)) {
    $field_info = array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          '',
          '',
        ),
        'allowed_values_function' => '',
      ),
      'field_name' => $field_name,
      'type' => 'list_boolean',
      'module' => 'list',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
    );
    $field_info = array_replace_recursive($field_info, $base_overrides);
    field_create_field($field_info);
  }
  $existing = field_info_instance($entity_type, $field_name, $bundle);
  if (empty($existing)) {
    $field_info = array(
      'label' => 'Replace me',
      'widget' => array(
        'weight' => '0',
        'type' => 'options_onoff',
        'module' => 'options',
        'active' => 1,
        'settings' => array(
          'display_label' => 1,
        ),
      ),
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'type' => 'hidden',
          'weight' => '1',
          'settings' => array(),
        ),
        'paragraphs_editor_preview' => array(
          'type' => 'hidden',
          'label' => 'above',
          'settings' => array(),
          'weight' => 0,
        ),
      ),
      'required' => FALSE,
      'description' => '',
      'default_value' => array(
        array(
          'value' => 0,
        ),
      ),
      'field_name' => $field_name,
      'entity_type' => $entity_type,
      'bundle' => $bundle,
    );
    $field_info = array_replace_recursive($field_info, $instance_overrides);
    field_create_instance($field_info);
  }
}

/**
 * Helper function to add a number list field to a bundle.
 *
 * @param string $field_name
 *   The field name.
 * @param string $bundle
 *   The paragraphs bundle.
 * @param array $instance_overrides
 *   Nested array of instance overrides
 * @param array $base_overrides
 *   Optional nested array of field overrides.
 */
function paragraphs_aplenty_add_number_list_field($field_name, $bundle, $instance_overrides, $base_overrides = array()) {

  $entity_type = 'paragraphs_item';

  $existing = field_info_field($field_name);
  if (empty($existing)) {
    $field_info = array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '',
      ),
      'field_name' => $field_name,
      'type' => 'list_integer',
      'module' => 'list',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
    );
    $field_info = array_replace_recursive($field_info, $base_overrides);
    field_create_field($field_info);
  }

  $existing = field_info_instance($entity_type, $field_name, $bundle);
  if (empty($existing)) {
    $field_info = array(
      'label' => 'Replace me',
      'widget' => array(
        'weight' => '0',
        'type' => 'options_select',
        'module' => 'options',
        'active' => 1,
        'settings' => array(),
      ),
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'type' => 'hidden',
          'weight' => '1',
          'settings' => array(),
        ),
        'paragraphs_editor_preview' => array(
          'type' => 'hidden',
          'label' => 'above',
          'settings' => array(),
          'weight' => 0,
        ),
      ),
      'required' => FALSE,
      'description' => '',
      'default_value' => array(),
      'field_name' => $field_name,
      'entity_type' => $entity_type,
      'bundle' => $bundle,
    );
    $field_info = array_replace_recursive($field_info, $instance_overrides);
    field_create_instance($field_info);
  }
}

/**
 * Helper function to add a text list field to a bundle.
 *
 * @param string $field_name
 *   The field name.
 * @param string $bundle
 *   The paragraphs bundle.
 * @param array $instance_overrides
 *   Nested array of instance overrides
 * @param array $base_overrides
 *   Optional nested array of field overrides.
 */
function paragraphs_aplenty_add_text_list_field($field_name, $bundle, $instance_overrides, $base_overrides = array()) {

  $entity_type = 'paragraphs_item';

  $existing = field_info_field($field_name);
  if (empty($existing)) {
    $field_info = array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '',
      ),
      'field_name' => $field_name,
      'type' => 'list_text',
      'module' => 'list',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
    );
    $field_info = array_replace_recursive($field_info, $base_overrides);
    field_create_field($field_info);
  }

  $existing = field_info_instance($entity_type, $field_name, $bundle);
  if (empty($existing)) {
    $field_info = array(
      'label' => 'Replace me',
      'widget' => array(
        'weight' => '0',
        'type' => 'options_select',
        'module' => 'options',
        'active' => 1,
        'settings' => array(),
      ),
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'type' => 'hidden',
          'weight' => '1',
          'settings' => array(),
        ),
        'paragraphs_editor_preview' => array(
          'type' => 'hidden',
          'label' => 'above',
          'settings' => array(),
          'weight' => 0,
        ),
      ),
      'required' => FALSE,
      'description' => '',
      'default_value' => array(),
      'field_name' => $field_name,
      'entity_type' => $entity_type,
      'bundle' => $bundle,
    );
    $field_info = array_replace_recursive($field_info, $instance_overrides);
    field_create_instance($field_info);
  }
}

/**
 * Helper function to add a paragraphs field to a bundle.
 *
 * @param string $field_name
 *   The field name.
 * @param string $bundle
 *   The paragraphs bundle.
 * @param array $instance_overrides
 *   Nested array of instance overrides
 * @param array $base_overrides
 *   Optional nested array of field overrides.
 */
function paragraphs_aplenty_add_paragraphs_field($field_name, $bundle, $instance_overrides, $base_overrides = array()) {

  $entity_type = 'paragraphs_item';

  $existing = field_info_field($field_name);
  if (empty($existing)) {
    $field_info = array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'field_name' => $field_name,
      'type' => 'paragraphs',
      'module' => 'paragraphs',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
    );
    $field_info = array_replace_recursive($field_info, $base_overrides);
    field_create_field($field_info);
  }

  $existing = field_info_instance($entity_type, $field_name, $bundle);
  if (empty($existing)) {
    $field_info = array(
      'label' => 'Replace me',
      'widget' => array(
        'type' => 'paragraphs_embed',
        'module' => 'paragraphs',
        'active' => 0,
        'settings' => array(),
      ),
      'settings' => array(
        'title' => 'Paragraph',
        'title_multiple' => 'Paragraphs',
        'default_edit_mode' => 'preview',
        'add_mode' => 'button',
        'allowed_bundles' => array(),
        'bundle_weights' => array(
          'aplenty_text' => '1',
          'aplenty_grid' => '2',
          'aplenty_media_list' => '3',
          'aplenty_hero' => '4',
          'aplenty_cards' => '5',
        ),
        'user_register_form' => false,
      ),
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'type' => 'paragraphs_view',
          'settings' => array(
            'view_mode' => 'full',
          ),
          'module' => 'paragraphs',
          'weight' => 4,
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'hidden',
          'type' => 'paragraphs_view',
          'settings' => array(
            'view_mode' => 'full',
          ),
          'module' => 'paragraphs',
          'weight' => 4,
        ),
      ),
      'required' => FALSE,
      'description' => '',
      'default_value' => NULL,
      'field_name' => $field_name,
      'entity_type' => $entity_type,
      'bundle' => $bundle,
    );

    $field_info = array_replace_recursive($field_info, $instance_overrides);
    field_create_instance($field_info);
  }
}

/**
 * Helper function to add a text field to a bundle.
 *
 * @param string $field_name
 *   The field name.
 * @param string $bundle
 *   The paragraphs bundle.
 * @param array $instance_overrides
 *   Nested array of instance overrides
 * @param array $base_overrides
 *   Optional nested array of field overrides.
 */
function paragraphs_aplenty_add_text_field($field_name, $bundle, $instance_overrides, $base_overrides = array()) {

  $entity_type = 'paragraphs_item';

  $existing = field_info_field($field_name);
  if (empty($existing)) {
    $field_info = array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '255',
      ),
      'field_name' => $field_name,
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'cardinality' => '1',
    );
    $field_info = array_replace_recursive($field_info, $base_overrides);
    field_create_field($field_info);
  }

  $existing = field_info_instance($entity_type, $field_name, $bundle);
  if (empty($existing)) {
    $field_info = array(
      'label' => 'Replace me',
      'widget' => array(
        'weight' => '1',
        'type' => 'text_textfield',
        'module' => 'text',
        'active' => 1,
        'settings' => array(
          'size' => '60',
        ),
      ),
      'settings' => array(
        'text_processing' => '0',
      ),
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'type' => 'text_default',
          'settings' => array(),
          'module' => 'text',
          'weight' => 0,
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'hidden',
          'type' => 'text_default',
          'settings' => array(
          ),
          'weight' => 0,
        ),
      ),
      'required' => FALSE,
      'description' => '',
      'default_value' => NULL,
      'field_name' => $field_name,
      'entity_type' => $entity_type,
      'bundle' => $bundle,
    );
    $field_info = array_replace_recursive($field_info, $instance_overrides);
    field_create_instance($field_info);
  }
}

/**
 * Helper function to add an image field to a paragraph type.
 *
 * @param string $field_name
 *   The field name.
 * @param string $bundle
 *   The paragraphs bundle.
 * @param array $instance_overrides
 *   Nested array of instance overrides
 * @param array $base_overrides
 *   Optional nested array of field overrides.
 */
function paragraphs_aplenty_add_image_field($field_name, $bundle, $instance_overrides, $base_overrides = array()) {

  $entity_type = 'paragraphs_item';

  $existing = field_info_field($field_name);
  if (empty($existing)) {
    $field_info = array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'uri_scheme' => 'public',
        'default_image' => 0,
      ),
      'field_name' => $field_name,
      'type' => 'image',
      'module' => 'image',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
    );
    $field_info = array_replace_recursive($field_info, $base_overrides);
    field_create_field($field_info);
  }

  $existing = field_info_instance($entity_type, $field_name, $bundle);
  if (empty($existing)) {
    $field_info = array(
      'label' => 'Replace Me',
      'widget' => array(
        'type' => 'image_image',
        'module' => 'image',
        'active' => 1,
        'settings' => array(
          'progress_indicator' => 'throbber',
          'preview_image_style' => 'thumbnail',
        ),
      ),
      'settings' => array(
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg svg webm',
        'max_filesize' => '50 MB',
        'max_resolution' => '',
        'min_resolution' => '',
        'max_dimensions' => '',
        'min_dimensions' => '',
        'alt_field' => 1,
        'alt_field_required' => 0,
        'title_field' => 0,
        'default_image' => 0,
        'user_register_form' => false,
      ),
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'type' => 'image',
          'settings' => array(
            'image_style' => 'thumbnail',
            'image_link' => '',
          ),
          'module' => 'image',
          'weight' => 1,
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'hidden',
          'type' => 'image',
          'settings' => array(
            'image_style' => 'thumbnail',
            'image_link' => '',
          ),
          'module' => 'image',
          'weight' => 1,
        ),
      ),
      'required' => FALSE,
      'description' => '',
      'field_name' => $field_name,
      'entity_type' => $entity_type,
      'bundle' => $bundle,
    );
    $field_info = array_replace_recursive($field_info, $instance_overrides);
    field_create_instance($field_info);
  }
}

/**
 * Helper function to add an image field to a paragraph type.
 *
 * @param string $field_name
 *   The field name.
 * @param string $bundle
 *   The paragraphs bundle.
 * @param array $instance_overrides
 *   Nested array of instance overrides
 * @param array $base_overrides
 *   Optional nested array of field overrides.
 */
function paragraphs_aplenty_add_file_field($field_name, $bundle, $instance_overrides, $base_overrides = array()) {

  $entity_type = 'paragraphs_item';

  $existing = field_info_field($field_name);
  if (empty($existing)) {
    $field_info = array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'uri_scheme' => 'public',
        'display_default' => 0,
        'display_field' => 0,
      ),
      'field_name' => $field_name,
      'type' => 'file',
      'module' => 'file',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
    );
    $field_info = array_replace_recursive($field_info, $base_overrides);
    field_create_field($field_info);
  }

  $existing = field_info_instance($entity_type, $field_name, $bundle);
  if (empty($existing)) {
    $field_info = array(
      'label' => 'Replace Me',
      'widget' => array(
        'type' => 'file_generic',
        'module' => 'file',
        'active' => 1,
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
      ),
      'settings' => array(
        'file_directory' => 'aplenty-file',
        'file_extensions' => 'txt pdf rtf',
        'max_filesize' => '50 MB',
        'description_field' => 1,
        'user_register_form' => false,
      ),
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'type' => 'file_default',
          'settings' => array(),
          'module' => 'file',
          'weight' => 1,
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'hidden',
          'type' => 'file_default',
          'settings' => array(),
          'module' => 'file',
          'weight' => 1,
        ),
      ),
      'required' => FALSE,
      'description' => '',
      'field_name' => $field_name,
      'entity_type' => $entity_type,
      'bundle' => $bundle,
    );
    $field_info = array_replace_recursive($field_info, $instance_overrides);
    field_create_instance($field_info);
  }
}

/**
 * Helper function to add a long text field to a paragraph type.
 *
 * @param string $field_name
 *   The field name.
 * @param string $bundle
 *   The paragraphs bundle.
 * @param array $instance_overrides
 *   Nested array of instance overrides
 * @param array $base_overrides
 *   Optional nested array of field overrides.
 */
function paragraphs_aplenty_add_text_long_field($field_name, $bundle, $instance_overrides, $base_overrides = array()) {

  $entity_type = 'paragraphs_item';

  $existing = field_info_field($field_name);
  if (empty($existing)) {
    $field_info = array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'field_name' => $field_name,
      'type' => 'text_long',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
    );
    $field_info = array_replace_recursive($field_info, $base_overrides);
    field_create_field($field_info);
  }

  $existing = field_info_instance($entity_type, $field_name, $bundle);
  if (empty($existing)) {
    $field_info = array(
      'label' => 'Replace me',
      'widget' => array(
        'type' => 'text_textarea',
        'module' => 'text',
        'active' => 1,
        'settings' => array(
          'rows' => '5',
        ),
      ),
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => false,
      ),
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'type' => 'text_default',
          'settings' => array(),
          'module' => 'text',
          'weight' => 0,
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'hidden',
          'type' => 'text_default',
          'settings' => array(),
          'module' => 'text',
          'weight' => 0,
        ),
      ),
      'required' => FALSE,
      'description' => '',
      'default_value' => NULL,
      'field_name' => $field_name,
      'entity_type' => $entity_type,
      'bundle' => $bundle,
    );
    $field_info = array_replace_recursive($field_info, $instance_overrides);
    field_create_instance($field_info);
  }
}
/**
 * Helper function to add a link field to a paragraph type.
 *
 * @param string $field_name
 *   The field name.
 * @param string $bundle
 *   The paragraphs bundle.
 * @param array $instance_overrides
 *   Nested array of instance overrides
 * @param array $base_overrides
 *   Optional nested array of field overrides.
 */
function paragraphs_aplenty_add_link_field($field_name, $bundle, $instance_overrides, $base_overrides = array()) {

  $entity_type = 'paragraphs_item';

  $existing = field_info_field($field_name);
  if (empty($existing)) {
    $field_info = array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'attributes' => array(
          'target' => 'default',
          'configurable_class' => 0,
          'class' => '',
          'rel' => '',
        ),
        'url' => 0,
        'title' => 'optional',
        'title_value' => '',
        'title_maxlength' => 128,
        'enable_tokens' => 1,
        'display' => array(
          'url_cutoff' => 80,
        ),
      ),
      'field_name' => $field_name,
      'type' => 'link_field',
      'module' => 'link',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
    );
    $field_info = array_replace_recursive($field_info, $base_overrides);
    field_create_field($field_info);
  }

  $existing = field_info_instance($entity_type, $field_name, $bundle);
  if (empty($existing)) {
    $field_info = array(
      'label' => 'Replace me',
      'widget' => array(
        'type' => 'link_field',
        'module' => 'link',
        'active' => 0,
        'settings' => array(),
      ),
      'settings' => array(
        'absolute_url' => 1,
        'validate_url' => 1,
        'url' => 0,
        'title' => 'required',
        'title_value' => '',
        'title_label_use_field_label' => 0,
        'title_maxlength' => '128',
        'display' => array(
          'url_cutoff' => '80',
        ),
        'attributes' => array(
          'target' => 'default',
          'rel' => '',
          'configurable_class' => 0,
          'class' => '',
          'configurable_title' => 0,
          'title' => '',
        ),
        'rel_remove' => 'default',
        'enable_tokens' => 1,
        'user_register_form' => false,
      ),
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'type' => 'link_default',
          'settings' => array(),
          'module' => 'link',
          'weight' => 2,
        ),
        'paragraphs_editor_preview' => array(
          'label' => 'hidden',
          'type' => 'link_default',
          'settings' => array(),
          'module' => 'link',
          'weight' => 2,
        ),
      ),
      'required' => FALSE,
      'description' => '',
      'default_value' => NULL,
      'field_name' => $field_name,
      'entity_type' => $entity_type,
      'bundle' => $bundle,
    );
    $field_info = array_replace_recursive($field_info, $instance_overrides);
    field_create_instance($field_info);
  }
}
