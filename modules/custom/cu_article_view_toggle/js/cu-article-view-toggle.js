(function ($) {
  $(document).ready(function(){
    $('.article-toggle-list').hide();
    $('.article-toggle-grid-link').addClass('active');
     $('.article-toggle-navigation a').click(function(){
       var target = $(this).attr('href');
       var container = $(this).attr('data-article-toggle-id');


       $('#article-toggle-' + container + ' .article-toggle-section').hide();
       $(target).fadeIn();
       $('#article-toggle-' + container + ' .article-toggle-navigation a').removeClass('active');
       $(this).addClass('active');
       return false;
     });
  });
})(jQuery);
