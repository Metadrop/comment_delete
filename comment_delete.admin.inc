<?php
/**
 * Settings for comment deletion.
 */
function comment_delete_settings_form() {
  $form['comment_delete_replies'] = array(
    '#type' => 'select',
    '#title' => t('Action for replies'),
    '#description' => t('Specify how replies should be handled by default when deleting a comment.'),
    '#options' => array(
      0 => t('Delete all replies of the comment'),
      1 => t('Move all replies up one level'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('comment_delete_replies', 0),
  );
  return system_settings_form($form);
}