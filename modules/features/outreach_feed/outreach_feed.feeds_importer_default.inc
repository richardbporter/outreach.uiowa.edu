<?php
/**
 * @file
 * outreach_feed.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function outreach_feed_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'outreach_feed';
  $feeds_importer->config = array(
    'name' => 'Outreach Feed',
    'description' => 'Imports outreach data as county nodes.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'county',
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'County',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Year',
            'target' => 'field_year:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Alumni',
            'target' => 'field_alumni',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Educators',
            'target' => 'field_educators',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'UI Ed Physicians',
            'target' => 'field_ui_educated_physicians',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Total Physicians',
            'target' => 'field_total_physicians',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'UI Ed Assistants',
            'target' => 'field_ui_educated_assistants',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Total Assistants',
            'target' => 'field_total_assistants',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'UI Ed Dentists',
            'target' => 'field_ui_educated_dentists',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Total Dentists',
            'target' => 'field_total_dentists',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'UI Ed Nurses',
            'target' => 'field_ui_educated_nurses',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Total Nurses',
            'target' => 'field_total_nurses',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'UI Ed Pharmacists',
            'target' => 'field_ui_educated_pharmacists',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Total Pharmacists',
            'target' => 'field_total_pharmacists',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Business',
            'target' => 'field_business',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Education',
            'target' => 'field_education',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Engineering',
            'target' => 'field_engineering',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'CLAS',
            'target' => 'field_liberal_arts',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'Medicine',
            'target' => 'field_medicine',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'Nursing',
            'target' => 'field_nursing',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'Graduate College',
            'target' => 'field_graduate',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'Graduate Medicine',
            'target' => 'field_graduate_medicine',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'Public Health',
            'target' => 'field_public_health',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'Management',
            'target' => 'field_management',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'Dentistry',
            'target' => 'field_dentistry',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'Law',
            'target' => 'field_law',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'Professional Medicine',
            'target' => 'field_professional_medicine',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'Pharmacy',
            'target' => 'field_pharmacy',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'Vendors Paid',
            'target' => 'field_vendors_paid',
            'unique' => FALSE,
          ),
          29 => array(
            'source' => 'Sum of Payments',
            'target' => 'field_sum_of_payments',
            'unique' => FALSE,
          ),
          30 => array(
            'source' => 'UIHC Visits',
            'target' => 'field_uihc_clinic_visits',
            'unique' => FALSE,
          ),
          31 => array(
            'source' => 'Outreach Visits',
            'target' => 'field_outreach_clinic_visits',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['outreach_feed'] = $feeds_importer;

  return $export;
}
