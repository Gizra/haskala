// Book tabs scroller.
(function ($) {
  $(document).ready(function() {

    // Disable the right scroller when the list fits in the frame.
    if ($('#details-navigation ul').width() < $('#details-navigation .tabs-frame').width()) {
      $('#details-navigation > a.next').addClass('disabled');
    }

    $('#details-navigation > a').click(function(event) {
      event.preventDefault();
      var a = $(event.currentTarget);
      if (a.hasClass('disabled')) {
        return;
      }

      // The increments are half the tabs container width.
      var visibleWidth = $('#details-navigation').width();
      var delta = visibleWidth / 2;
      if (a.data('direction') == 'next') {
        delta *= -1;
      }

      // Re-set the list margin.
      var margin = parseInt($('#details-navigation ul').css('margin-left'));
      margin += delta;

      // Enable both arrow links, and disable one of them in case a limit was reached.
      $('#details-navigation > a').removeClass('disabled');

      // Block left navigation on zero.
      if (margin >= 0) {
        margin = 0;
        a.addClass('disabled');
      }

      // Block right navigation when the tab list fills less than half the container.
      var listWidth = $('#details-navigation ul').width();
      var minMargin = (listWidth - (visibleWidth / 2)) * -1;
      if (margin < minMargin ) {
        margin = minMargin;
        a.addClass('disabled');
      }
      // Update the list margin.
      $('#details-navigation ul').css('margin-left', margin + "px");
    });
  });
})(jQuery);
