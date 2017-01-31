<?php

/**
 * @file
 * Default theme implementation to display gifs in a table of four columns.
 *
 * Available variables:
 *
 * - $items: The gif items in an array.
 */

  $columns = 4;
  $rows = array_chunk($items, $columns);
?>
<table class="giphy-search-gallery">
  <tbody>
    <?php foreach ($rows as $row_number => $columns): ?>
      <?php
        $row_class = 'row-' . ($row_number + 1);
        if ($row_number == 0) {
          $row_class .= ' row-first';
        }
        if (count($rows) == ($row_number + 1)) {
          $row_class .= ' row-last';
        }
      ?>
      <tr class="<?php print $row_class; ?>">
        <?php foreach ($columns as $column_number => $item): ?>
          <td class="<?php print 'col-'. ($column_number + 1); ?>">
            <div class="giphy-search-image"><img src="<?php print $item['url']; ?>"></img></div>
          </td>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>