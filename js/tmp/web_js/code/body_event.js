document.body.addEventListener("click", event =>
	{
		if (event.target.nodeName == "BUTTON")
			alert("Clicked", event.target.textContent);
	});
