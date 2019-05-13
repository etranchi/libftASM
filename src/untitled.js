<script type="text/javascript">

window.addEventListener("DOMContentLoaded", (event) => {
    console.log("DOM entièrement chargé et analysé");
    setup()
});

function setup() {
	var cs = document.getElementById("conseil&strategie");
	var fin = document.getElementById("financement");
	var fis = document.getElementById("fiscaux");
	var team1 = document.getElementById("team1");
	var team2 = document.getElementById("team2");
	var team3 = document.getElementById("team3");

	fin.addEventListener('click', putName);
	cs.addEventListener('click', putName);
	fis.addEventListener('click', putName);
	team1.style.display = "none";
	team2.style.display = "none";
	team3.style.display = "none";

	
}


function putName(event, target) {
 
 if (this.id === "conseil&strategie") {
 	document.getElementById("team1").style.display = "block";
 	document.getElementById("team2").style.display = "none";
 	document.getElementById("team3").style.display = "none";
 }
 if (this.id === "financement") {
 	document.getElementById("team1").style.display = "none";
 	document.getElementById("team2").style.display = "block";
 	document.getElementById("team3").style.display = "none";
 }	
 if (this.id === "fiscaux") {
 	document.getElementById("team1").style.display = "none";
 	document.getElementById("team2").style.display = "none";
 	document.getElementById("team3").style.display = "block";
 }

};
</script>