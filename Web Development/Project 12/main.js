/*
     Filename: main.css
  
     Author: Steven Vang   
     Date: 12/13/2019    
 */
function computearea(r){
	return Math.PI*r*r;
}

$(document).ready(function(){
	
	$("#calculatearea").click(function()
	{
	p = $("#precision").val();
	r = $("#radius").val();
	a = computearea(r);
	$("#area").val(a.toFixed(p));
	});

});



