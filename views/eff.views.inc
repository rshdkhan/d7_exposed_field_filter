<?php

/**
 * Implements hook_views_data().
 */
function eff_views_data() {
    $data['views']['table']['group'] = t('Global');
    $data['views']['table']['join'] = array(
        // #global is a special flag which let's a table appear all the time.
        '#global' => array(),
    );
    $data['views']['eff'] = array(
        'title' => t('Exposed fields filter'),
        'help' => t('Exposed Fields to visitor.'),
        'filter' => array(
            'handler' => 'views_handler_filter_eff',
        ),
    );

    return $data;

}