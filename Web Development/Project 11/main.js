function monthly(I, N, S)
{
//Inputs:
    //I : Yearly Interest Year in decimal (e.g. 8.5% = 0.085)
    //N : Number of monthly payments
    //S : Loan amount
//Outputs:
    //returns monthly payments on the loan
    return (S*I/12*Math.pow(I/12+1, N))/(Math.pow(I/12+1,N)-1);
}

function showVal()
{
	loanAmount = document.getElementById("la").value*1;
    
	while(loanAmount = null || loanAmount <= 0)
	{
		loanAmount = prompt("Please enter a postive value for loan amount!");
		document.getElementById("la").value = loanAmount;
	}
    
	loanAmount = document.getElementById("la").value*1;
	interestRate = document.getElementById("ir").value/100;
	var Arraylist = new Array();
	Arraylist = document.getElementsByClassName("option");
    
	for(var i = 0; i < Arraylist.length; i++)
	{
		if(Arraylist[i].selected)
		{
			LengthofLoan = Arraylist[i].value*12;
			break;
		}
		else
		{
			LengthofLoan = 0;
		}
	}
    
	if(document.getElementById("per").checked)
	{
		TypeofLoan = document.getElementById("per").value;
		loanAmount += 1000;
	}
    
	else if(document.getElementById("bus").checked)
	{
		TypeofLoan = document.getElementById("bus").value;
		loanAmount += 500;
	}
    
	else
	{
		TypeofLoan = document.getElementById("edu").value;
	}
    
	if(document.getElementById("fts").checked)
	{
		interestRate -= 0.01;
	}
    
	Monthly = monthly(interestRate, LengthofLoan, loanAmount);
	document.getElementById("mpa").value = Monthly.toFixed(2);
	TAOPTB = Monthly*LengthofLoan;
	document.getElementById("tpa").value = TAOPTB.toFixed(2);
    
	if(Monthly > 5000)
	{
		alert("We need last 5 years of tax returns for all loans over $5000.00");
	}
}

function Reloadfunction()
{
	var choice = confirm("Are you sure you want to reload?");
	if(choice)
	{
		window.location.reload;
	}
}