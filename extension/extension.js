// The module 'vscode' contains the VS Code extensibility API
// Import the module and reference it with the alias vscode in your code below

"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.activate = void 0;
const path = require("path");
const vscode = require("vscode");
const fs = require("fs");
// destination.txt will be created or overwritten by default.

// this method is called when your extension is activated
// your extension is activated the very first time the command is executed

/**
 * @param {vscode.ExtensionContext} context
 */
function activate(context) {

	// Use the console to output diagnostic information (console.log) and errors (console.error)
	// This line of code will only be executed once when your extension is activated
	console.log('Congratulations, your extension "vspointer-cg-" is now active!');

	// The command has been defined in the package.json file
	// Now provide the implementation of the command with  registerCommand
	// The commandId parameter must match the command field in package.json
	let disposable = vscode.commands.registerCommand('vspointer-cg-.helloWorld', function () {
		// The code you place here will be executed every time your command is executed

		// Display a message box to the user
		vscode.window.showInformationMessage('Hello World from VSPointer(CG)!');
	});

	
	context.subscriptions.push(vscode.commands.registerCommand('vspointer-cg-.runvs', () => {
        CodingPanel.start(context.extensionPath);
    }));
	context.subscriptions.push(disposable);
	
}

	class CodingPanel {

		static start(extensionPath) {

			CodingPanel.constructor(extensionPath) {
				this._disposables = [];
				this._extensionPath = extensionPath;
				//Se establece el contenido web
				//Se esta atento a si se cierra el programa para eliminarlo
				
			}

			const column = vscode.window.activeTextEditor
				? vscode.window.activeTextEditor.viewColumn
				: undefined;
			var s = vscode.workspace.rootPath;
			if (s != undefined) {
				//Se copia la biblioteca dinamica en el proyecto
				fs.copyFile("/home/guillen00/build-VSPointer-Desktop-Release/libVSPointer.so", path.join(s, "libVSPointer.so"), (err) => {
					if (err)
						throw err;
					console.log("was copied to destination");
				});
				//Se copian las configuraciones para incluir la biblioteca
				var fileName = path.join(s, ".vscode/c_cpp_properties.json");
				var file = require(fileName);
				file.configurations[0].includePath[file.configurations[0].includePath.length] = "/home/guillen00/build-VSPointer-Desktop-Release/**";
				fs.writeFile(fileName, JSON.stringify(file, null, 2), function writeJSON(err) {
					if (err)
						return console.log(err);
					console.log(JSON.stringify(file));
					console.log('writing to ' + fileName);
				});
				fileName = path.join(s, ".vscode/tasks.json");
				file = require(fileName);
				file.tasks[0].args = [
					"${file}",
					"-I/home/guillen00/VSPointer",
					"-L/home/guillen00/build-VSPointer-Desktop-Release",
					"-lVSPointer",
					"-lstdc++",
					"-o",
					"${fileDirname}/${fileBasenameNoExtension}"
				];
				fs.writeFile(fileName, JSON.stringify(file, null, 2), function writeJSON(err) {
					if (err)
						return console.log(err);
					console.log(JSON.stringify(file));
					console.log('writing to ' + fileName);
					});



// this method is called when your extension is deactivated
function deactivate() {}

module.exports = {
	activate,
	deactivate
}  
		}
	}
}
