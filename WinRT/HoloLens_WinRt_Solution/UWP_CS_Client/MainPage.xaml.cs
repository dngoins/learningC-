using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Notifications;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;
using Component;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace UWP_CS_Client
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();

            var layers = Component.Hen.Layers;

            Component.Hen oHen = new Component.Hen();
            oHen.Clucked += OHen_Clucked;
            oHen.GenericClucked += OHen_GenericClucked;
            var brood = oHen.Brood;
            
            foreach (var b in brood)
            {
                System.Diagnostics.Debug.WriteLine(b);
            }
            //oHen.GenericClucked += new TypedEventHandler<Hen, int>();
            // new Constructor
            Component.Hen oHen2 = new Component.Hen(12);
           

        }

        private void OHen_GenericClucked(Component.Hen sender, int args)
        {
           // throw new NotImplementedException();
        }

        private void OHen_Clucked(Component.Hen sender, int args)
        {
           // throw new NotImplementedException();
        }
    }
}
