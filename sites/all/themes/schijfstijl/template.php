<?php
/**
 * Return a themed breadcrumb trail.
 *
 * @param $breadcrumb
 *   An array containing the breadcrumb links.
 * @return
 *   A string containing the breadcrumb output.
 */
function schijfstijl_breadcrumb($variables){
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    $breadcrumb[] = drupal_get_title();
    return '<div class="breadcrumb">' . implode(' <span class="breadcrumb-separator">/</span> ', $breadcrumb) . '</div>';
  }
}

function schijfstijl_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {
  
    unset($form['search_block_form']['#title']);
	
    $form['search_block_form']['#title_display'] = 'invisible';
	$form_default = t('Search');
    $form['search_block_form']['#default_value'] = $form_default;
    $form['actions']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/images/search-button.png');

 	$form['search_block_form']['#attributes'] = array('onblur' => "if (this.value == '') {this.value = '{$form_default}';}", 'onfocus' => "if (this.value == '{$form_default}') {this.value = '';}" );
  }
}

/**
 * Add javascript files for Google Fonts
 */
drupal_add_js('http://fonts.googleapis.com/css?family=Coustard','external');


?>