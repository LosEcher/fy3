// Room: /u/swordman/yangzhou/xiling
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
������վ�ڸ������Ƶ��������£�ֻ�����Ž��գ�������Ҷ��
�㲻�����ƣ�Ϊ��û��������ɨ�أ�Ժ���������ˣ�ֻ����ԺƮ
��һ�����̣�����˸���ս������о�����Щʲô��
LONG);

  set("light_up", 1);
  set("outdoors", "/u/swordman");
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"damingshi",
]));

  setup();
}
