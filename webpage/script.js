// implement cookies for the name title and stuff




// drag n drop code below tetetetette
// source -> https://uploadcare.com/blog/how-to-make-a-drag-and-drop-file-uploader/

const dropArea = document.getElementById('uploadpdf');
const fileInput = document.getElementById('file-input');

// Utility function to prevent default browser behavior
function preventDefaults(e) {
  e.preventDefault();
  e.stopPropagation();
}

// Preventing default browser behavior when dragging a file over the container
dropArea.addEventListener('dragover', preventDefaults);
dropArea.addEventListener('dragenter', preventDefaults);
dropArea.addEventListener('dragleave', preventDefaults);

// Handling dropping files into the area
dropArea.addEventListener('drop', handleDrop);

// We’ll discuss `handleDrop` function down the road
function handleDrop(e) { /* ... */ }

// this is only for ui improvement
dropArea.addEventListener('dragover', () => {
  dropArea.classList.add('dragglow');
});

dropArea.addEventListener('dragleave', () => {
  dropArea.classList.remove('dragglow');
});


// ill continue w/ this later 
