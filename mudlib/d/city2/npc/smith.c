// smith.c

inherit NPC;
inherit F_VENDOR;

void create()
{
        set_name("����", ({ "tiejiang", "smith" }));
	set("title", "�������ϰ�");
	set("shen_type", 1);

        set("gender", "����" );
        set("age", 33);
        set("long", "����������ǯ��סһ����ȵ�����Ž�¯�С�\n");

        set("combat_exp", 400);
	set("attitude", "friendly");
        set("vendor_goods",([
                   "����":"/obj/weapon/sword",
                   "�ֵ�":"/obj/weapon/blade",
                   "����":"/obj/weapon/hammer",
                   "����":"/d/city2/obj/tudao",
        ]));

	setup();
carry_object("/obj/cloth")->wear();
}

void init()
{
        add_action("do_vendor_list", "list");
}
