// Room: /d/city2/shancharoad
inherit ROOM;

void create ()
{
  set ("short", "�ٵ�");
  set ("long", @LONG
�˴��Ǹ�����·�ڣ��ٵ�ͨ���˴�Ҳ�͵��˾�ͷ������ͨ��������
�ţ��������Ǳ�ѩ���ǵ��ྩ��
LONG);

  set("outdoors", "/d/city2");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"guandao2",
  "northwest":"/d/menggu/huanglu1",
"northeast":"/d/yanjing/to_yj",
]));

  setup();
}
