cat > src/app.js << EOF
document.addEventListener('DOMContentLoaded',() =>{
	const app = document.getElementById('app');
	
	const form = document.createElement('form');
	const input = document.createElement('input');
	input.type = 'text';
	input.placeholder = 'Type new work...';
	const button = document.createElement('buton')
	button.textContent = 'Add';
	form.appendChild(input);
	form.appendChild(form);
});
EOF