jQuery.noConflict();
jQuery(document).ready(function($){
     var form   = $('#save-the-date-submit'),
         input  = $('#save-the-date-submit input');
     function addUserToMailchimp(){
          form.on('submit', function(e){
               e.preventDefault();

               var email = input.val();

               $.ajax({
                  url: 'i/mailchimp-signup/'+email,
                  type: 'POST',
                  dataType: 'html'
               })
               .done(function(result) {
                    mailchimpOnComplete();
               })
               .fail(function() {
                  mailchimpOnFail();
               })
               .always(function() {
                    console.log("Mailchimp signup function ran");
               });
          });
     }

     addUserToMailchimp();

     function mailchimpOnComplete(){
          var thanks = $('#thanks');

          form.find('input')
               .addClass('fadeOut');
          setTimeout(function(){
               form.prepend('<p id="thanks">Thanks!</p>');
          }, 200);

     }

     function mailchimpOnFail(){
          form.find('input[type="submit"]')
               .val('Opps! Something went wrong')
               .addClass('save-the-date-error');
     }
});
