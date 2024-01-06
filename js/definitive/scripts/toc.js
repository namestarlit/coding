document.addEventListener('DOMContentLoaded', () => {
  // Check if TOC container element exists
  // else create one at the start of the docoment body.
  let toc = document.querySelector('#TOC');
  if (!toc) {
    toc = document.createElement('div');
    toc.id = 'TOC';
    document.body.prepend(toc);
  }

  // Find all section heading elements assuming titles use <h1>
  // and sections use <h2> through <h6>
  const headings = document.querySelectorAll('h2,h3,h4,h5,h6');

  // An array to keep track of section numbers.
  const sectionNumbers = [0, 0, 0, 0, 0];

  for (const heading of headings) {
    if (heading.parentNode === toc) {
      continue;
    }

    const level = parseInt(heading.tagName.charAt(1)) - 1;
    sectionNumbers[level - 1]++;
    for (let i = level; i < sectionNumbers.length; i++) {
      sectionNumbers[i] = 0;
    }
    // Combine section numbers for all heading levels
    // to produce a section number like 2.3.1.
    const sectionNumber = sectionNumbers.slice(0, level).join('.');

    // Add section number to the section title.
    const span = document.createElement('span');
    span.className = 'TOCSectNum';
    span.textContent = sectionNumber;
    heading.prepend(span);

    // Wrap the heading in a named anchor.
    const anchor = document.createElement('a');
    const fragmentName = `TOC${sectionNumber}`;
    anchor.name = fragmentName;

    // Insert anchor before heading
    heading.before(anchor);
    // Move heading inside the anchor
    anchor.append(heading);

    // Create a link to this section.
    const link = document.createElement('a');
    link.href = `#${fragmentName}`;

    // Copy the heading text into the link (safe use of innerHTML)
    link.innerHTML = heading.innerHTML;

    // Place a link into a div that's styleable based on the level.
    const entry = document.createElement('div');
    entry.classList.add('TOCEntry', `#TOCLevel${level}`);
    entry.append(link);

    // Add entry to the toc container.
    toc.append(entry);
  }
});
