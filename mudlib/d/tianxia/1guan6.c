// Room: /d/tianxia/1guan6
inherit ROOM;

void create()
{
  set ("short", "����ס��");
  set ("long", @LONG
һ�Ÿߴ���߷����໥�����ߵ���ͨ�����ǰ��е��ӵ�ס����Ҳ��
����ƽ��ϰ���书�ĵط�,�ſ����������ʯ����ס���ϱ������ͨ·��
�ϱߵ�ʯ��һ����˸�Լ���ɡ�ȴʲô��û�ҡ�
LONG);

  set("outdoors", "/d/tianxia");
  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"1guan7",
  "west" : __DIR__"1guan3",
]));
  setup();
}
