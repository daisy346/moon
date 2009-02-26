//
// Unit tests for Run
//
// Contact:
//   Moonlight List (moonlight-list@lists.ximian.com)
//
// Copyright (C) 2009 Novell, Inc (http://www.novell.com)
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Media;

using Mono.Moonlight.UnitTesting;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace MoonTest.System.Windows.Documents {

	[TestClass]
	public class RunTest {

		[TestMethod]
		public void TextBlockInherited ()
		{
			TextBlock tb = new TextBlock ();
			Run r = new Run ();

			tb.Inlines.Add (r);

			InlineTest.CheckTextBlockInherited (r);

			tb.Foreground = new SolidColorBrush (Colors.Green);
			tb.FontSize = 18;

			Assert.AreEqual (18, r.FontSize, "FontSize after changing tb");
			Assert.AreEqual (Colors.Green, (r.Foreground as SolidColorBrush).Color, "Foreground.Color after changing tb");
		}

		[TestMethod]
		[Ignore ("sl2 crasher")]
		public void NullifyFontFamily ()
		{
			Run r = new Run ();
			r.FontFamily = null;
		}
	}
}
