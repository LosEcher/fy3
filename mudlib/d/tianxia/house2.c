// Room: /d/tianxia/house2
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
���ҵĽ����ж���һЩŮ�˵������������������й�֬��ζ����
����Զ�����ϵ��˼�����ƿ��һ�Ѽ���ͷ��û�д�ɨ�ɾ���
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"house",
]));
  setup();
}
