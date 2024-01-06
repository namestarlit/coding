const button = document.querySelector("button");

button.addEventListener("mousedown", event =>
	{
		if (event.button == 0)
			alert("Left button");
		else if (event.button == 1)
			alert("Middle button");
		else if (event.button == 2)
			alert("Right button");
	});
