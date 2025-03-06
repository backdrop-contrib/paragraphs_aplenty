# Paragraphs Aplenty

Provides several useful Paragraph types, including accordions, Hero blocks,
cards, grids of columns, headings with optional anchors, media blocks, image,
and simple text paragraph.

After installation, feel free to alter the Paragraph types by adding fields,
and altering fields. You can also customize templates by copying them from the
module and placing in your theme. However, try not to remove the default fields.

## Sub-modules

*Gallery* provides a Gallery paragraphs type that uses the
Colorbox module to provide a way to scroll through a group of images.

*Quicktabs* provides a Quicktabs paragraphs type that uses the
Quicktabs module to provide a way to display a collection of tabs.

*Classy* adds background, margin, padding and width class fields to the main
paragraph types provided by Paragraphs Aplenty. It currently does not support
Gallery or Quicktabs.

## Install

Install this module using the official [Backdrop CMS instructions](https://backdropcms.org/guide/modules).

## Custom Grid classes

By default, the multi-column paragraphs type use the [CSS Grid](https://getbootstrap.com/docs/5.3/layout/css-grid/)
from the Bootstrap project. This can be customized by setting the grid class prefix
(default: `g-col`) and breakpoint (default: `md`) in the settings file. For example,
to use the default grid layout classes from core:

```php
$settings['paragraphs_aplenty_grid_class_prefix'] = 'col';
$settings['paragraphs_aplenty_grid_breakpoint'] = 'lg';
```

The breakpoint can be changed too. The module uses a simple format of using only
one breakpoint `md` at `48em`. When the viewport is `48em` or wider it will be the
chosen number of columns; narrower it will be 1 column.

## Classy Paragraphs integration

The sub-module sets smart defaults for the background colours, margin, padding,
and width. The Background field offers a number of default colours based on
[MDBootstrap](https://mdbootstrap.com/docs/standard/content-styles/colors/#rgba-colors). It also offers some
"brand" colours which, out of the box, are based on the other colours. It's
best to override the brand defaults so they match your theme. The Brand colours
are:

- Primary
- Secondary
- Info
- Success
- Warning
- Danger

The width field only has effect if the window is 48em or wider. The settings are:

- Full - right to the edge of the paragraphs container, no padding
- Large - regular width with default padding
- Medium - two-thirds of the vailable width
- Narrow - half of the available width
- Tiny - third of the available width

The margin and padding fields have options for adding space to the top and
bottom of the paragraph, in three different sizes. Or to remove all padding
or margin.

## License

This project is GPL v2 software. See the LICENSE.txt file in this
directory for complete text.

## Current Maintainers

* [Herb v/d Dool](https://github.com/herbdool)
* Seeking additional maintainers

## Credit

Adapted from [USWDS Paragraphs](https://www.drupal.org/project/uswds_paragraphs),
which was developed and maintained by [brockfanning](https://www.drupal.org/u/brockfanning),
[daniel_j](https://www.drupal.org/u/daniel_j), [fskreuz](https://www.drupal.org/u/fskreuz),
and [jrglasgow](https://www.drupal.org/u/jrglasgow). And inspired by
[Paragraphs pack](https://www.drupal.org/project/paragraphs_pack).
