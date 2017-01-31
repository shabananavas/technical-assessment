<?php
/**
 * @file
 * Code for the Giphy Search admin settings.
 */

/**
 * Configuration form for altering the settings for
 * the Giphy service.
 *
 * @param  array $form
 * @param  array &$form_state
 *
 * @return array
 */
function giphy_search_admin_settings_form($form, &$form_state) {
	$form = array();

  // Configuration for the Giphy API token.
  $form['giphy_api_token'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter the Giphy API Token'),
    '#default_value' => variable_get('giphy_api_token', GIPHY_SEARCH_API_TOKEN),
    '#required' => TRUE,
  );

  // Configuration for the Giphy Search Endpoint URL.
  $form['giphy_endpoint_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter the Giphy Endpoint URL'),
    '#default_value' => variable_get('giphy_endpoint_url', GIPHY_SEARCH_ENDPOINT_URL),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}