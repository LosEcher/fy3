// Room: /d/suzhou/tbgju
inherit ROOM;

void create()
{
  set ("short", "�ﲮ���");
  set ("long", @LONG
���Ǽ䲼��ʮ�ֺ����ķ��䣬����������һ����ζ������ȥ�����
�������˯����������һ�Ŵ󴲣�ʮ�����ۡ�����վ��һ�ˣ���ɫ����
�Ŀ����㡣
LONG);

	set("objects",([
		__DIR__"npc/tianboguang":1,
	]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"yuannei1",
]));
  setup();
  replace_program(ROOM);
}
