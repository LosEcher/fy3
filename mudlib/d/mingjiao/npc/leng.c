inherit NPC;


void create()
{
    set_name("��ǫ", ({ "leng qian", "leng", "qian", }));
        set("long",
        "����һλ��������ߣ���һ���ײ����ۡ�\n"
        "��˵����Ϊ��ݣ�����ɱ������ͷҲ���϶�˵���ϻ���\n"
        );


    set("nickname", "��������");
        set("gender", "����");
        set("attitude", "friendly");
//    set("class", "bonze");

    set("age", 54);
        set("shen_type", 1);
       set("str", 25);
        set("int", 25);
        set("con", 25);
        set("dex", 25);
        set("max_qi", 500);
        set("max_jing", 500);
        set("neili", 500);
        set("max_neili", 500);
        set("jiali", 40);
        set("combat_exp", 50000);
        set("score", 5000);

        set_skill("force", 45);
        set_skill("jiuyang-shengong", 45);
        set_skill("dodge", 50);
        set_skill("cuff", 45);
        set_skill("qishang-quan", 45);
        set_skill("parry", 45);
        set_skill("literate", 60);

        map_skill("force", "jiuyang-shengong");
//        map_skill("dodge", "shaolin-shenfa");
        map_skill("cuff", "qishang-quan");
        map_skill("parry", "qishang-quan");


    create_family("����", 3, "��ɢ��");

        setup();

    carry_object("/d/mingjiao/obj/baipao")->wear();
}
void attempt_apprentice(object ob)
{
        command("say �ðɣ��Ҿ��������ˡ�");
        command("recruit " + ob->query("id"));
}
