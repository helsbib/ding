// $Id$

/**
 * Javascript helpers for Ding reservation interaction buttons.
 */
Drupal.behaviors.dingCartButtons = function () {
  Drupal.tingButtons.dialogButton(".reserve-now", { 
    buttons: function(buttons, event, data) {
      if (data.status === 'success' && $(event.target).hasClass('reserve-now')) {
        $count = $('#account-profile .reservations strong');
        $count.text(parseInt($count.text(), 10) + 1);
      }
    }
  });
}
