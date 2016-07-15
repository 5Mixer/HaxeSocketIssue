package ;
import haxe.io.Bytes;
import haxe.io.BytesInput;
import sys.net.Host;
import sys.net.Socket;

class Main {
	public function new (){
		//Allow the changing of the server host IP through a command line argument.

		var listener = new Socket();
		var readSockets = [listener];

		listener.bind(new Host(Host.localhost()),8080);
		listener.listen(1);

		var socketStuff = Socket.select(readSockets,null,null, 60);

		for (socket in socketStuff.read){
			if (socket == listener){

			}
		}
	}


	public static function main (){
		new Main();
	}
}
