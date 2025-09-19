import typer
from markdown_pdf import MarkdownPdf, Section

app = typer.Typer()

HEADER = '''<div style="display: flex; flex-direction: row; justify-content: space-between">
  <img src='../images/wago.svg' width="100px" />
  <h1 style="border: none">Praktikum - Gib mir mal ’ne WAGO</h1>
</div>'''

@app.command()
def update_handout():
    global HEADER

    content = open('docs/index.md', 'r', encoding='utf-8').read().split('---')[2]
    # newcontent = content.replace('src="images/', 'src="docs/images/')
    
    with open('docs/handout.md', 'w', encoding='utf-8') as handoutfile:
        handoutfile.write(HEADER)
        handoutfile.write(content)

    print("Datei `handout.md` wurde erstellt. Bitte jetzt mit Markdown-PDF konvertieren und in docs ablegen!")
