// Internal to the library, do not include this directly
// NOT INSTALLED

// Source: http://www.unicode.org/iso15924/iso15924-codes.html

#pragma once

#include "unicorn/core.hpp"
#include "unicorn/character.hpp"

namespace Unicorn {

    namespace UnicornDetail {

        struct ScriptInfo {
            const char* abbr;
            const char* name;
        };

        constexpr ScriptInfo iso_script_names[] {

            { "afak", "Afaka" },
            { "aghb", "Caucasian Albanian" },
            { "ahom", "Ahom" },
            { "arab", "Arabic" },
            { "armi", "Imperial Aramaic" },
            { "armn", "Armenian" },
            { "avst", "Avestan" },
            { "bali", "Balinese" },
            { "bamu", "Bamum" },
            { "bass", "Bassa Vah" },
            { "batk", "Batak" },
            { "beng", "Bengali" },
            { "blis", "Blissymbols" },
            { "bopo", "Bopomofo" },
            { "brah", "Brahmi" },
            { "brai", "Braille" },
            { "bugi", "Buginese" },
            { "buhd", "Buhid" },
            { "cakm", "Chakma" },
            { "cans", "Canadian Aboriginal" },
            { "cari", "Carian" },
            { "cham", "Cham" },
            { "cher", "Cherokee" },
            { "cirt", "Cirth" },
            { "copt", "Coptic" },
            { "cprt", "Cypriot" },
            { "cyrl", "Cyrillic" },
            { "cyrs", "Cyrillic (Old Church Slavonic)" },
            { "deva", "Devanagari" },
            { "dsrt", "Deseret" },
            { "dupl", "Duployan Shorthand" },
            { "egyd", "Egyptian Demotic" },
            { "egyh", "Egyptian Hieratic" },
            { "egyp", "Egyptian Hieroglyphs" },
            { "elba", "Elbasan" },
            { "ethi", "Ethiopic" },
            { "geok", "Khutsuri" },
            { "geor", "Georgian" },
            { "glag", "Glagolitic" },
            { "goth", "Gothic" },
            { "gran", "Grantha" },
            { "grek", "Greek" },
            { "gujr", "Gujarati" },
            { "guru", "Gurmukhi" },
            { "hang", "Hangul" },
            { "hani", "Han" },
            { "hano", "Hanunoo" },
            { "hans", "Han (Simplified)" },
            { "hant", "Han (Traditional)" },
            { "hatr", "Hatran" },
            { "hebr", "Hebrew" },
            { "hira", "Hiragana" },
            { "hluw", "Anatolian Hieroglyphs" },
            { "hmng", "Pahawh Hmong" },
            { "hrkt", "Katakana or Hiragana" },
            { "hung", "Old Hungarian" },
            { "inds", "Indus" },
            { "ital", "Old Italic" },
            { "java", "Javanese" },
            { "jpan", "Japanese" },
            { "jurc", "Jurchen" },
            { "kali", "Kayah Li" },
            { "kana", "Katakana" },
            { "khar", "Kharoshthi" },
            { "khmr", "Khmer" },
            { "khoj", "Khojki" },
            { "knda", "Kannada" },
            { "kore", "Korean" },
            { "kpel", "Kpelle" },
            { "kthi", "Kaithi" },
            { "lana", "Tai Tham" },
            { "laoo", "Lao" },
            { "latf", "Latin (Fraktur)" },
            { "latg", "Latin (Gaelic)" },
            { "latn", "Latin" },
            { "lepc", "Lepcha" },
            { "limb", "Limbu" },
            { "lina", "Linear A" },
            { "linb", "Linear B" },
            { "lisu", "Lisu" },
            { "loma", "Loma" },
            { "lyci", "Lycian" },
            { "lydi", "Lydian" },
            { "mahj", "Mahajani" },
            { "mand", "Mandaic" },
            { "mani", "Manichaean" },
            { "maya", "Mayan Hieroglyphs" },
            { "mend", "Mende Kikakui" },
            { "merc", "Meroitic Cursive" },
            { "mero", "Meroitic Hieroglyphs" },
            { "mlym", "Malayalam" },
            { "modi", "Modi" },
            { "mong", "Mongolian" },
            { "moon", "Moon" },
            { "mroo", "Mro" },
            { "mtei", "Meitei Mayek" },
            { "mult", "Multani" },
            { "mymr", "Myanmar" },
            { "narb", "Old North Arabian" },
            { "nbat", "Nabataean" },
            { "nkgb", "Nakhi Geba" },
            { "nkoo", "N’Ko" },
            { "nshu", "Nüshu" },
            { "ogam", "Ogham" },
            { "olck", "Ol Chiki" },
            { "orkh", "Old Turkic" },
            { "orya", "Oriya" },
            { "osma", "Osmanya" },
            { "palm", "Palmyrene" },
            { "pauc", "Pau Cin Hau" },
            { "perm", "Old Permic" },
            { "phag", "Phags-Pa" },
            { "phli", "Inscriptional Pahlavi" },
            { "phlp", "Psalter Pahlavi" },
            { "phlv", "Book Pahlavi" },
            { "phnx", "Phoenician" },
            { "plrd", "Miao" },
            { "prti", "Inscriptional Parthian" },
            { "rjng", "Rejang" },
            { "roro", "Rongorongo" },
            { "runr", "Runic" },
            { "samr", "Samaritan" },
            { "sara", "Sarati" },
            { "sarb", "Old South Arabian" },
            { "saur", "Saurashtra" },
            { "sgnw", "SignWriting" },
            { "shaw", "Shavian" },
            { "shrd", "Sharada" },
            { "sidd", "Siddham" },
            { "sind", "Khudawadi" },
            { "sinh", "Sinhala" },
            { "sora", "Sora Sompeng" },
            { "sund", "Sundanese" },
            { "sylo", "Syloti Nagri" },
            { "syrc", "Syriac" },
            { "syre", "Syriac (Estrangelo)" },
            { "syrj", "Syriac (Western)" },
            { "syrn", "Syriac (Eastern)" },
            { "tagb", "Tagbanwa" },
            { "takr", "Takri" },
            { "tale", "Tai Le" },
            { "talu", "New Tai Lue" },
            { "taml", "Tamil" },
            { "tang", "Tangut" },
            { "tavt", "Tai Viet" },
            { "telu", "Telugu" },
            { "teng", "Tengwar" },
            { "tfng", "Tifinagh" },
            { "tglg", "Tagalog" },
            { "thaa", "Thaana" },
            { "thai", "Thai" },
            { "tibt", "Tibetan" },
            { "tirh", "Tirhuta" },
            { "ugar", "Ugaritic" },
            { "vaii", "Vai" },
            { "visp", "Visible Speech" },
            { "wara", "Warang Citi" },
            { "wole", "Woleai" },
            { "xpeo", "Old Persian" },
            { "xsux", "Cuneiform" },
            { "yiii", "Yi" },
            { "zinh", "Inherited" },
            { "zmth", "Mathematical Notation" },
            { "zsym", "Symbols" },
            { "zxxx", "Unwritten Documents" },
            { "zyyy", "Common" },
            { "zzzz", "Unknown" },
        };

    }

}