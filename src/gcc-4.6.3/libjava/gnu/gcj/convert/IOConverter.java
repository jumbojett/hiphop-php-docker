/* Copyright (C) 2000, 2001, 2005  Free Software Foundation

   This file is part of libgcj.

This software is copyrighted work licensed under the terms of the
Libgcj License.  Please consult the file "LIBGCJ_LICENSE" for
details.  */

/* This is a base class that handles aliasing issues for
   UnicodeToBytes to BytesToUnicode.  */

package gnu.gcj.convert;

import java.util.Hashtable;

public abstract class IOConverter
{
  // Map encoding aliases to our canonical form.
  static private Hashtable hash = new Hashtable ();

  // True if we have to do byte-order conversions on iconv()
  // arguments.
  static protected boolean iconv_byte_swap;

  static
  {
    // Manually maintained aliases.  Note that the value must be our
    // canonical name.
    hash.put ("iso-latin-1", "8859_1");
    hash.put ("iso8859_1", "8859_1");
    hash.put ("utf-16le", "UnicodeLittle");
    hash.put ("utf-16be", "UnicodeBig");
    // At least one build script out there uses 'utf8'.
    hash.put ("utf8", "UTF8");
    // On Solaris the default encoding, as returned by nl_langinfo(),
    // is `646' (aka ASCII), but the Solaris iconv_open() doesn't
    // understand that.  We work around the problem by adding an
    // explicit alias for Solaris users.
    hash.put ("646", "ASCII");

    // See PR 24552, PR 14358.
    hash.put ("euc_jp", "EUCJIS");
    hash.put ("eucjp", "EUCJIS");

    // All aliases after this point are automatically generated by the
    // `encodings.pl' script.  Run it to make any corrections.
    hash.put ("ansi_x3.4-1968", "ASCII");
    hash.put ("ansi_x3.4-1986", "ASCII");
    hash.put ("ascii", "ASCII");
    hash.put ("cp367", "ASCII");
    hash.put ("cp819", "8859_1");
    hash.put ("csascii", "ASCII");
    hash.put ("cseucpkdfmtjapanese", "EUCJIS");
    hash.put ("csisolatin1", "8859_1");
    hash.put ("csshiftjis", "SJIS");
    hash.put ("euc-jp", "EUCJIS");
    hash.put ("extended_unix_code_packed_format_for_japanese", "EUCJIS");
    hash.put ("ibm367", "ASCII");
    hash.put ("ibm819", "8859_1");
    hash.put ("iso-8859-1", "8859_1");
    hash.put ("iso-ir-100", "8859_1");
    hash.put ("iso-ir-6", "ASCII");
    hash.put ("iso646-us", "ASCII");
    hash.put ("iso_646.irv:1991", "ASCII");
    hash.put ("iso_8859-1", "8859_1");
    hash.put ("iso_8859-1:1987", "8859_1");
    hash.put ("l1", "8859_1");
    hash.put ("latin1", "8859_1");
    hash.put ("ms_kanji", "SJIS");
    hash.put ("shift_jis", "SJIS");
    hash.put ("us", "ASCII");
    hash.put ("us-ascii", "ASCII");
    hash.put ("utf-8", "UTF8");
    hash.put ("utf16-be", "UnicodeBig");
    hash.put ("utf16-le", "UnicodeLittle");
    // End script-generated section.

    iconv_byte_swap = iconv_init ();
  }

  private static native boolean iconv_init ();

  // Turn an alias into the canonical form.
  protected static final String canonicalize (String name)
  {
    String c = (String) hash.get (name.toLowerCase ());
    return c == null ? name : c;
  }
}
