// Room: /d/new/tianxia/incave3
inherit ROOM;

void create()
{
  set ("short", "���붴��");
  set ("long", @LONG
��ǰ�ںڵ�һƬ,�������Щʲô,�Ӻڰ������Ұ�޴ֿ�ĺ��.��
�������µ�ˮ��������,������.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "northwest" : __DIR__"incave1",
]));
  setup();
}
