// Room: /d/huanggon/shiweifang1
inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG
��䷿���ľ���ϰ�����������,��������,�Ѹ����Ѫ��ģ��,һ
�ߵĵ���һֻ��Ͱ�ڽ��˼���ţƤ����,һ��̼����̼��δϨ��,���
�Ǽ�������,��Ȼ���ǿ�������.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"shiweifang",
]));
  setup();
  replace_program(ROOM);
}
