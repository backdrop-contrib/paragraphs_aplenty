# Paragraphs Aplenty

Provides several useful Paragraph types, including accordions, Hero blocks,
cards, grids of columns, headings with optional anchors, media blocks, image,
and simple text paragraph.

After installation, feel free to alter the Paragraph types by adding fields,
and altering fields. You can also customize templates by copying them from the
module and placing in your theme. However, try not to remove the default fields.

## Sub-modules

*Paragraphs Aplenty Gallery* provides a Gallery paragraphs type that uses the
Colorbox module to provide a way to scroll through a group of images.

*Paragraphs Aplenty Quicktabs* provides a Quicktabs paragraphs type that uses the
Quicktabs module to provide a way to display a collection of tabs.

## Install

Install this module using the official [Backdrop CMS instructions](https://backdropcms.org/guide/modules).

## Custom Grid classes

By default, the multi-column paragraphs type use the [CSS Grid](https://getbootstrap.com/docs/5.3/layout/css-grid/)
from the Bootstrap project. This can be customized by setting the grid class prefix
(default: `g-col`) and breakpoint (default: `md`) in the settings file. For example,
to use the default grid layout classes from core:

```
$settings['paragraphs_aplenty_grid_class_prefix'] = 'col';
$settings['paragraphs_aplenty_grid_breakpoint'] = 'lg';
```

The breakpoint can be changed too. The module uses a simple format of using only
one breakpoint `md` at `48em`. When the viewport is `48em` or wider it will be the
chosen number of columns; narrower it will be 1 column.

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
