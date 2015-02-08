// Book tabs scroller.
$(document).ready(function() {

  $('#details-navigation > a').click(function(event) {
    event.preventDefault();
    // The increments are half the tabs container width.
    var visibleWidth = $('#details-navigation').width();
    var delta = visibleWidth / 2;
    if ($(event.currentTarget).data('direction') == 'next') {
      delta *= -1;
    }

    // Re-set the list margin.
    var margin = parseInt($('#details-navigation ul').css('margin-left'));
    margin += delta;
    // Block left navigation on zero.
    if (margin > 0) {
      margin = 0;
    }
    // Block right navigation when the tab list fills less than half the container.
    var listWidth = $('#details-navigation ul').width();
    var minMargin = (listWidth - (visibleWidth / 2)) * -1;
    if (margin < minMargin ) {
      margin = minMargin;
    }
    // Update the list margin.
    $('#details-navigation ul').css('margin-left', margin + "px");
  });
});
