// Room: /d/kaifeng/yezhulin
inherit ROOM;

void create()
{
  set ("short", "Ұ����");
  set ("long", @LONG
�ԴӲ���ǰ�������г���Ұ��֮����Ƭ���־������������⾳�ڣ�
̸��ɫ�ߡ�ֻ��Ϊ�������ȵ����ӻ����ֱߴ�ЩҰ���������ո�ǿ��
ͼ��·����Ҳ�Ӵ˹��������˵��������ǻ�ɽ�ˡ�
LONG);

  set("outdoors", "/d/kaifeng");
  set("exits", ([ /* sizeof() == 1 */
  "northeast" : __DIR__"dadao2",
	"west":"/d/huashan/path1",
]));
	set("objects",([
		"/npc/man4":1,
		"/npc/man5":1,
	]));
  setup();
  replace_program(ROOM);
}
