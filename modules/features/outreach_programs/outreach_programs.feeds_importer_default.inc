<?php
/**
 * @file
 * outreach_programs.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function outreach_programs_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'programs';
  $feeds_importer->config = array(
    'name' => 'Programs',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
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
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Program Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Brought to you by',
            'target' => 'field_program_unit:label',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'External Link',
            'target' => 'field_external_link:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'STEM',
            'target' => 'field_program_stem',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'program',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['programs'] = $feeds_importer;

  return $export;
}
