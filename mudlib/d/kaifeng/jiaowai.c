// Room: /d/kaifeng/jiaowai
inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
�˴��ǿ��ⱱ���������뿪��ܽ����ΰ�����ȶ����ɴ�ȥ��ɽ��
��Ŀ������ﲻ����һ��̫ƽ����
LONG);

  set("outdoors", "/d/kaifeng");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"xuandemen",
  "westup" : __DIR__"shanlu1",
]));

  setup();
}
